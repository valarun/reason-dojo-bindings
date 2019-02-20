/* TODO 1: Create binding for Donatello.js */
/* TODO 2: Create binding for Leonardo.js */
/* TODO 3: Use MichelangeloRe.re in Michelangelo.js and create binding for Michelangelo.js */

let leonardoSuperPowers = ["Lazy", "Handsome"];

let component = ReasonReact.statelessComponent(__MODULE__);

let make = _children => {
  ...component,
  render: _self =>
    <div>
       <h1> (ReasonReact.string("Cowabunga!!!")) </h1> </div>,
      /* TODO 1: <Donatello /> */
      /* TODO 2: <Leonardo superPowers={leonardoSuperPowers} /> */
      /* TODO 3: <Michelangelo /> */
};