/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCloudKitSyncProgressRuntimeTest.h>

@class NSError;

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest {

	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithErrorCode:(long long)arg1 ;
-(void)willUpdateSyncState:(id)arg1 ;
@end

