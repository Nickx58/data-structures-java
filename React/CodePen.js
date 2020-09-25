import React from "react";
import { DragDropContext, Droppable, Draggable } from "react-beautiful-dnd";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import { faCompressAlt, faExpandAlt } from "@fortawesome/free-solid-svg-icons";

const reorder = (list, startIndex, endIndex) => {
  const result = Array.from(list);
  const [removed] = result.splice(startIndex, 1);
  result.splice(endIndex, 0, removed);

  return result;
};

const getItemStyle = (isDragging, draggableStyle) => ({
  userSelect: "none",

  background: isDragging ? "lightgreen" : "grey",

  ...draggableStyle,
});

const getListStyle = (isDraggingOver) => ({
  background: isDraggingOver ? "lightblue" : "lightgrey",
  display: "flex",
  overflow: "auto",
});

class App extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      getTagName: [
        {
          id: "1",
          name: "HTML",
          open: true,
        },
        {
          id: "2",
          name: "CSS",
          open: true,
        },
        {
          id: "3",
          name: "JS",
          open: true,
        },
      ],
    };
    this.onDragEnd = this.onDragEnd.bind(this);
  }

  onDragEnd(result) {
    // dropped outside the list
    if (!result.destination) {
      return;
    }

    const items = reorder(
      this.state.getTagName,
      result.source.index,
      result.destination.index
    );

    this.setState({
      getTagName: items,
    });
  }

  setOpen = (item, id) => {
    const { getTagName } = this.state;
    const index = getTagName.findIndex((tag) => tag.id === String(id));
    let tags = [...getTagName];
    tags[index].open = !item.open;
    this.setState({ getTagName: tags });
  };

  render() {
    const { getTagName } = this.state;
    return (
      <DragDropContext onDragEnd={this.onDragEnd}>
        <Droppable droppableId="droppable" direction="horizontal">
          {(provided, snapshot) => (
            <div
              style={getListStyle(snapshot.isDraggingOver)}
              ref={provided.innerRef}
              {...provided.droppableProps}
            >
              {getTagName.map((item, index) => (
                <Draggable key={item.id} draggableId={item.id} index={index}>
                  {(provided, snapshot) => (
                    <div
                      style={getItemStyle(
                        snapshot.isDragging,
                        provided.draggableProps.style
                      )}
                      ref={provided.innerRef}
                      {...provided.draggableProps}
                      {...provided.dragHandleProps}
                      id={index}
                      className={`editor-container ${item.open ? "" : "collapsed"
                        }`}
                    >
                      <div className="editor-title">
                        {item.name}
                        <button
                          type="button"
                          className="expand-collapse-btn"
                          onClick={() => this.setOpen(item, index + 1)}
                        >
                          <FontAwesomeIcon
                            icon={item.open ? faCompressAlt : faExpandAlt}
                          />
                        </button>
                      </div>
                    </div>
                  )}
                </Draggable>
              ))}
              {provided.placeholder}
            </div>
          )}
        </Droppable>
      </DragDropContext>
    );
  }
}

export default App;
