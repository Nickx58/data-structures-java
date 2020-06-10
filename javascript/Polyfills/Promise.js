class MyPromise {
  constructor(callback) {
    this.state = 'PENDING';
    this.value = undefined;
    
    callback(this.resolve,this.reject);
  }
  
  // callback methods
  
  resolve = (value) => {
    // 
    this.value = value;
    this.state = "FULFILLED";
    
    if (this.onThenResolve) {
      // called the then
      this.onThenResolve = value;
    }
  }
  
  reject = (value) => {
    this.value = value;
    this.state = "REJECTED";
    if (this.onThenReject) {
      this.onThenReject = value;
    }
  }
  
  
  
  then(onResolve,onReject) {
    if(this.state === 'FUlFilled') {
      onResolve(value);
    } else if(this.state === 'Rejected') {
      onReject(value);
    }
    
    this.onThenResolve = onResolve;
    this.onThenReject = onReject;
    
    return this;
   
  }

})
  
}
