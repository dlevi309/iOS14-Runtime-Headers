/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSData, NSString;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {

	NSError* _error;
	NSData* _playInfoData;

}

@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * playInfoData;               //@synthesize playInfoData=_playInfoData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPlayInfoData:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(NSString *)description;
-(NSData *)playInfoData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

