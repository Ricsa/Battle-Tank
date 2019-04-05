// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Battle_Tank_NewEditorTarget : TargetRules
{
	public Battle_Tank_NewEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Battle_Tank_New" } );
	}
}
