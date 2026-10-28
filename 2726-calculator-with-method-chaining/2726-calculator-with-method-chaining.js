class Calculator {
  constructor(value) {
      this.result = value;
  }
  add(value){
    return this.result +=value, this;
  }
  subtract(value){
    return this.result -= value, this
  }
  multiply(value) {
   return this.result *= value, this;
  }
  divide(value) {
     if(value===0) {
          throw new Error("Division by zero is not allowed");
      }
    return this.result /= value, this;
  }
  power(value) {
    return this.result **= value, this;
  }
  getResult() {
    return this.result;
  }
}