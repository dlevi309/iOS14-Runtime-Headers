/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLDetectedFace, NSData;

@interface PLDetectedFaceprint : PLManagedObject

@property (nonatomic,retain) PLDetectedFace * face; 
@property (assign,nonatomic) int faceprintVersion; 
@property (nonatomic,retain) NSData * data; 
+(id)entityName;
@end

