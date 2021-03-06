/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <FontServices/FontInstallViewServiceProtocol.h>

@class NSXPCListener, NSString;

@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol> {

	/*^block*/id _completionHandler;
	NSXPCListener* _listener;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)doneWithDeleteAppFonts:(BOOL)arg1 ;
-(void)showDialogWithUserInfo:(id)arg1 ;
@end

