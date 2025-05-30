/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
prelude
import Lake.Build.Data
import Lake.Build.Job.Basic

namespace Lake
open Lean System

/-- A external library's declarative configuration. -/
structure ExternLibConfig (pkgName name : Name) where
  /-- The library's build data. -/
  getPath : Job (CustomData pkgName (.str name "static")) → Job FilePath
  deriving Inhabited
