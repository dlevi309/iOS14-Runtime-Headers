/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerTestSuite.h>

@class NSArray, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerBookmarkListRepresentation, NSString;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite> {

	NSArray* _operations;
	NSArray* _relativeProbabilitiesForOperations;
	WBSCyclerBookmarkOperationContext* _operationContext;
	WBSCyclerTestSuiteBookmarkAuxiliary* _bookmarkAuxiliary;
	unsigned long long _iterationCount;
	WBSCyclerBookmarkListRepresentation* _expectedTopLevelBookmarksFromPreviousIteration;

}

@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(void)setUp;
-(void)tearDown;
-(id)init;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

