/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NENexusAgentDelegate <NSObject>
@required
-(void)handleAssertFromClient:(id)arg1;
-(void)handleUnassertFromClient:(id)arg1;
-(BOOL)handleRequestNexusFromClient:(id)arg1;
-(void)closeFlowWithClientIdentifier:(id)arg1;
-(void)handleStartFromClient:(id)arg1;

@end

