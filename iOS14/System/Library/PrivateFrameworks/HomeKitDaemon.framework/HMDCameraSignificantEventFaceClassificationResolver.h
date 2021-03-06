/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject <HMFLogging> {

	HMDHome* _home;

}

@property (__weak) HMDHome * home;                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(id)personManagerWithUUID:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(id)faceClassificationForSignificantEventFaceClassifications:(id)arg1 ;
@end

