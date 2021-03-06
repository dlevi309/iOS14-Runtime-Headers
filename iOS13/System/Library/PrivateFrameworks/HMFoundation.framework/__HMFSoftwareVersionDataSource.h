/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoSoftwareVersionDataSource.h>

@class HMFSoftwareVersion, NSString;

@interface __HMFSoftwareVersionDataSource : HMFObject <HMFSystemInfoSoftwareVersionDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) HMFSoftwareVersion * softwareVersion; 
-(HMFSoftwareVersion *)softwareVersion;
@end

