/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, VOSubstitution;

@interface VOBundle : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,retain) VOSubstitution * iOSSubstitution; 
@property (nonatomic,retain) VOSubstitution * macOSSubstitution; 
+(id)fetchRequest;
@end

