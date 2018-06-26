module Styles = {
  open Css;
  let container = style([
    margin(px(20)),
    padding(px(5)),
    boxShadow(~x=px(2), ~y=px(2), grey) 
  ]);
};

let component = ReasonReact.statelessComponent("Messages");

let make = _children => {
  ...component,
  render: _self => <div className=Styles.container>
    /* TODO use the Query Component from ReasonApollo */
</div>
};
