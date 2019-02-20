
let component = ReasonReact.statelessComponent("App");

let make = (_) => {
  ...component,
  render: _ => 
  <h1> (ReasonReact.string("Hello World")) 
    <Yolo text={"im a js component wrapped in reason woho" ++ {j|🎉|j}} />
  </h1>
}