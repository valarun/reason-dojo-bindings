let component = ReasonReact.statelessComponent(__MODULE__);

[@genType]
let make = (_children) => {
...component,
render: _self =>
    <div>
        <h2>(ReasonReact.string("yolo im a reason component bish"))</h2>
    </div>,
};