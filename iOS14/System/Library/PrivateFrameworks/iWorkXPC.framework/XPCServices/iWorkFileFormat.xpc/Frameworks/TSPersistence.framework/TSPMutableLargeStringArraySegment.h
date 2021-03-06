/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArraySegment.h>

@interface TSPMutableLargeStringArraySegment : TSPAbstractMutableLargeArraySegment
-(void)saveToMessage:(LargeStringArraySegment*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeStringArraySegment*)arg1 unarchiver:(id)arg2 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
@end

