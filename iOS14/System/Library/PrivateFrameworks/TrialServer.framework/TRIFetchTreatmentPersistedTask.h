/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchTreatmentPersistedTask : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) int deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
+(id)descriptor;
@end

