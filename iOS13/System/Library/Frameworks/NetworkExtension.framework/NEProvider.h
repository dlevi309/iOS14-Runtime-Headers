/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NWPath, NWPathEvaluator, NEExtensionProviderContext, NSString;

@interface NEProvider : NSObject <NSExtensionRequestHandling> {

	NWPath* _defaultPath;
	NWPathEvaluator* _defaultPathEvaluator;
	NEExtensionProviderContext* _context;
	NSString* _appName;

}

@property (retain) NWPathEvaluator * defaultPathEvaluator;              //@synthesize defaultPathEvaluator=_defaultPathEvaluator - In the implementation block
@property (retain) NWPath * defaultPath;                                //@synthesize defaultPath=_defaultPath - In the implementation block
@property (retain) NEExtensionProviderContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) NSString * appName;                                  //@synthesize appName=_appName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isRunningInProvider;
+(BOOL)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2 ;
+(void)startSystemExtensionMode;
-(id)init;
-(void)dealloc;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NEExtensionProviderContext *)context;
-(void)setContext:(NEExtensionProviderContext *)arg1 ;
-(NWPath *)defaultPath;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setdefaultPathObserver:(id)arg1 ;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(id)initAllowUnentitled:(BOOL)arg1 ;
-(void)setDefaultPath:(NWPath *)arg1 ;
-(NWPathEvaluator *)defaultPathEvaluator;
-(void)setDefaultPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 ;
-(id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)displayMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
