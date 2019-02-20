
[@bs.module "./yolo.js"]
external yolo: ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type jsProps = {
  text: string,
};

let make = (~text, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=yolo,
    ~props=jsProps(~text),
    children,
  );