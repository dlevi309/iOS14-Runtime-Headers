/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL hasSynced; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,copy) NSString * syncServiceIdentifier; 
@property (nonatomic,retain) VCVoiceShortcutManagedObject * voiceShortcut; 
+(id)fetchRequest;
@end

