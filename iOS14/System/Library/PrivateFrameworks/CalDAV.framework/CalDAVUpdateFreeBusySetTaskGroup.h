/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, CoreDAVPropFindTask;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _state;
	NSURL* _inboxURL;
	NSURL* _urlToAdd;
	NSString* _suffixToFilterOut;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSURL * urlToAdd;                                   //@synthesize urlToAdd=_urlToAdd - In the implementation block
@property (nonatomic,retain) NSString * suffixToFilterOut;                       //@synthesize suffixToFilterOut=_suffixToFilterOut - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (assign,nonatomic) int state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)startTaskGroup;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)setUrlToAdd:(NSURL *)arg1 ;
-(void)setSuffixToFilterOut:(NSString *)arg1 ;
-(void)_startFetchFreeBusySet;
-(NSString *)suffixToFilterOut;
-(NSURL *)urlToAdd;
-(void)_startPropPatchWithURLs:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5 ;
@end

