/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBApplicationDropSessionSceneProviding <NSObject>
@required
-(id)newSceneIdentityForApplication:(id)arg1;
-(id)preferredSceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 preferNewScene:(BOOL)arg3;
-(id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg1;
-(BOOL)isApplicationActiveAndVisible:(id)arg1;

@end

