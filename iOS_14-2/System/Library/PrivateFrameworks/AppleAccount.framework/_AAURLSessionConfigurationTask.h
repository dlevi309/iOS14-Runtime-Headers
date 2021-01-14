/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/AAURLSessionTaskProtocol.h>

@protocol AAURLSessionTaskProtocol;
@class AAURLSession, NSURLRequest, NSString;

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol> {

	/*^block*/id _completion;
	os_unfair_lock_s _unfairLock;
	struct {
		unsigned isCanceled : 1;
		unsigned isFetchingConfiguration : 1;
	}  _flags;
	id<AAURLSessionTaskProtocol> _configurationTask;
	id<AAURLSessionTaskProtocol> _sessionTask;
	AAURLSession* _session;
	NSURLRequest* _originalRequest;

}

@property (nonatomic,readonly) AAURLSession * session;                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURLRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(NSURLRequest *)originalRequest;
-(id)init;
-(AAURLSession *)session;
-(NSString *)description;
-(void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_initiateSessionTaskWithConfiguration:(id)arg1 ;
-(void)_unfairLock_initiateConfigurationTask;
-(id)initWithSession:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)resume;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
