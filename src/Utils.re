/* require css file for side effect only */
[@bs.val] external requireCSS: string => unit = "require";

module Env = {
  /* [@bs.module "dotenv"] external config : unit => unit = ""; */
  [@bs.val] [@bs.scope "process"] external env : Js.Dict.t(string) = "";
  let get = key => key |> Js.Dict.get(env) |> Js.Option.getWithDefault("");
};