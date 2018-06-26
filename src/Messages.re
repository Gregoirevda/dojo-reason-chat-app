let component = ReasonReact.statelessComponent("Messages");

let make = (
  ~messages,
  _children
) => {
  ...component,
  render: _self => <div>
    /* Map on all messages and pass each message in the ChatBubble component */
  </div>
};
