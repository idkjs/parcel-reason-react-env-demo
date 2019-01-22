ReactDOMRe.renderToElementWithId(<App name="World" />, "app");
/* this works */
let dbHost = [%raw {|
  process.env.DB_HOST
|}];

Js.log2("dbHost",dbHost);

/* this doesnt */
Js.log2("DB_HOST", Utils.Env.get("DB_PASS"));
Js.log2("DB_USER", Utils.Env.get("DB_USER"));
