/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, SBInCallPresentationSession;

@interface SBInCallTransientOverlayPresentationWorkspaceTransaction : SBMainWorkspaceTransaction {

	NSString* _analyticsSource;
	SBInCallPresentationSession* _sourcePresentationSession;

}

@property (nonatomic,copy,readonly) NSString * analyticsSource;                                      //@synthesize analyticsSource=_analyticsSource - In the implementation block
@property (nonatomic,readonly) SBInCallPresentationSession * sourcePresentationSession;              //@synthesize sourcePresentationSession=_sourcePresentationSession - In the implementation block
-(void)_begin;
-(NSString *)analyticsSource;
-(id)initWithTransitionRequest:(id)arg1 sourcePresentationSession:(id)arg2 analyticsSource:(id)arg3 ;
-(void)_performInCallPresentationWithCompletion:(/*^block*/id)arg1 ;
-(SBInCallPresentationSession *)sourcePresentationSession;
@end

