/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/RWIProtocolNetworkDomainHandler.h>

@class NSMutableDictionary, IKJSInspectorController, NSString;

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {

	NSMutableDictionary* _loaders;
	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKJSInspectorController *)controller;
-(void)unregisterLoaderWithIdentifier:(id)arg1 ;
-(id)registerLoaderWithIdentifier:(id)arg1 ;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)clearAllTrackedLoaders;
-(void)setExtraHTTPHeadersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 headers:(id)arg3 ;
-(void)getResponseBodyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
-(void)setResourceCachingDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 disabled:(BOOL)arg3 ;
-(void)loadResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 ;
-(void)getSerializedCertificateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
-(void)resolveWebSocketWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 objectGroup:(id*)arg4 ;
-(void)setInterceptionEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3 ;
-(void)interceptWithResponseWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 content:(id)arg4 base64Encoded:(BOOL)arg5 mimeType:(id*)arg6 status:(int*)arg7 statusText:(id*)arg8 headers:(id*)arg9 ;
-(void)addInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 stage:(long long*)arg4 ;
-(void)removeInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 stage:(long long*)arg4 ;
-(void)interceptContinueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
@end

