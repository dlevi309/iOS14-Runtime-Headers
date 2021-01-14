/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURLSession, WFOAuth2Credential, NSURL, NSString;

@interface WFTodoistSessionManager : NSObject {

	NSURLSession* _session;
	WFOAuth2Credential* _credential;
	NSURL* _baseURL;
	NSString* _syncToken;

}

@property (nonatomic,copy,readonly) NSURL * baseURL;                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * syncToken;                         //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
-(WFOAuth2Credential *)credential;
-(NSURL *)baseURL;
-(id)init;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSURLSession *)session;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(NSString *)syncToken;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)getProjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
