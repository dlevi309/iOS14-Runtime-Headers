/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ProbeManagerDelegate <NSObject>
@optional
-(void)probeStatusUpdate:(id)arg1;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2;
-(void)serviceAdded:(id)arg1 type:(long long)arg2;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2;
-(void)probeFactString:(id)arg1 module:(id)arg2 goIntoDiagnosing:(BOOL)arg3 run:(BOOL)arg4;

@end

