module Styles = {
  open Css;
  let container = style([
    
  ]);

  let input = style([
    width(px(300)),
    height(px(22)),
    marginLeft(px(32)),
  ]);

  let submitBtn = style([
    height(px(28)),
  ]);
};


let component = ReasonReact.statelessComponent("AddMessage");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <input
        className=Styles.input
      />
      <button 
        className=Styles.submitBtn
      >
        ("SEND" |> ReasonReact.string)
      </button>
    </div>,
};
