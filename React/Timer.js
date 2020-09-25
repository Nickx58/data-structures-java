// Problem Statement:
// Make a timer which accepts number of seconds
// as props and convert to HH:MM:SS format (with padding of 2 places with 0).

// Example: props.seconds = 13000
// Output: 03:36:40 => 03:36:39 ....... => 00:00:01

import React from "react";
import "./styles.scss";

export default class Timer extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      darkMode: true,
      seconds: 5,
      minutes: 0,
      sec: 0,
    };
  }

  componentDidMount() {
    this.computeTime();
    this.descreaseCount();
  }

  componentWillUnmount() {}

  descreaseCount = () => {
    this.id = setInterval(() => {
      this.setState({ seconds: this.state.seconds - 1 });
    }, 1000);
  };

  computeTime = () => {
    const { seconds } = this.state;
    if (seconds === 0) {
      clearInterval(this.id);
      return `00:00:00`;
    }
    let hours = Math.floor(seconds / 3600);
    let minutes = Math.floor((seconds % 3600) / 60);
    let second = Math.floor(seconds % 60);
    return ` ${hours}:${minutes}:${second}`;
  };

  render() {
    const { title } = this.props;
    let modeClass = this.state.darkMode ? "dark-mode" : "light-mode";
    return (
      <div className={`box content ${modeClass}`}>
        <h1>{title}</h1>
        {this.computeTime()}
      </div>
    );
  }
}
