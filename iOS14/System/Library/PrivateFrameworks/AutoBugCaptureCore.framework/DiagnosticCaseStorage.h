/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, UploadRecord;

@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic,retain) NSString * caseID; 
@property (nonatomic,retain) NSString * caseGroupID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSDate * caseClosedTime; 
@property (nonatomic,retain) NSString * caseDomain; 
@property (nonatomic,retain) NSString * caseType; 
@property (nonatomic,retain) NSString * caseSubtype; 
@property (nonatomic,retain) NSString * caseSubtypeContext; 
@property (nonatomic,retain) NSString * caseDetectedProcess; 
@property (nonatomic,retain) NSString * caseEffectiveProcess; 
@property (nonatomic,retain) NSString * caseRelatedProcesses; 
@property (nonatomic,retain) NSString * caseThresholdValues; 
@property (assign,nonatomic) short caseState; 
@property (assign,nonatomic) short caseClosureType; 
@property (assign,nonatomic) short caseDampeningType; 
@property (nonatomic,retain) NSString * caseEvents; 
@property (nonatomic,retain) NSString * casePayloads; 
@property (nonatomic,retain) NSString * caseAttachments; 
@property (nonatomic,retain) NSString * caseContext; 
@property (nonatomic,retain) NSString * caseObjectVersion; 
@property (assign,nonatomic) BOOL remoteTrigger; 
@property (assign,nonatomic) BOOL attachmentsIncomplete; 
@property (assign,nonatomic) short uploadState; 
@property (nonatomic,retain) UploadRecord * uploadRecord; 
@property (nonatomic,retain) NSString * buildVariant; 
@property (nonatomic,retain) NSString * buildVersion; 
@end

