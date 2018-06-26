let component = ReasonReact.statelessComponent("NewMessageNotification");

let make = _children => {
  ...component,
  render: _self => <div/>
};
