/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerTestTarget;
@class WBSCyclerBookmarkListRepresentation, NSString;

@interface WBSCyclerBookmarkOperationContext : NSObject {

	id<WBSCyclerTestTarget> _testTarget;
	WBSCyclerBookmarkListRepresentation* _topLevelBookmark;
	NSString* _titlePrefix;

}

@property (nonatomic,retain) id<WBSCyclerTestTarget> testTarget;                                  //@synthesize testTarget=_testTarget - In the implementation block
@property (nonatomic,retain) WBSCyclerBookmarkListRepresentation * topLevelBookmark;              //@synthesize topLevelBookmark=_topLevelBookmark - In the implementation block
@property (nonatomic,copy) NSString * titlePrefix;                                                //@synthesize titlePrefix=_titlePrefix - In the implementation block
-(BOOL)_isBookmarkPrefixed:(id)arg1 ;
-(id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1 ;
-(id)_copyBookmark:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2 ;
-(BOOL)_isBookmarkValid:(id)arg1 ;
-(id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(BOOL)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)randomValidStrictDescendantOfList:(id)arg1 ;
-(void)setTitlePrefix:(NSString *)arg1 ;
-(id)filterOutBookmarksWithoutTitlePrefixInList:(id)arg1 ;
-(id)randomBookmarkTitle;
-(id)randomValidStrictDescendantOfTopLevelBookmark;
-(id<WBSCyclerTestTarget>)testTarget;
-(void)setTestTarget:(id<WBSCyclerTestTarget>)arg1 ;
-(WBSCyclerBookmarkListRepresentation *)topLevelBookmark;
-(void)setTopLevelBookmark:(WBSCyclerBookmarkListRepresentation *)arg1 ;
-(NSString *)titlePrefix;
@end

