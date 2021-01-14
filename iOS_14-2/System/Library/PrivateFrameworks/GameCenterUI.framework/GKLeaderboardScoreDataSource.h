/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGameLayerCollectionDataSource.h>

@protocol GKLeaderboardScoreDelegate;
@class GKLeaderboard, NSArray, NSString, GKLeaderboardEntry, UICollectionView, NSSet, GKLeaderboardAddFriendsCell;

@interface GKLeaderboardScoreDataSource : GKGameLayerCollectionDataSource {

	BOOL _restrictToFriendsOnly;
	BOOL _autoScrollToLocalPlayerPosition;
	BOOL _isLoadingData;
	BOOL _isLoadingNextData;
	BOOL _isLoadingPreviousData;
	BOOL _firstLoad;
	GKLeaderboard* _leaderboard;
	long long _leaderboardOccurrence;
	id<GKLeaderboardScoreDelegate> _leaderboardScoreDelegate;
	long long _startingRank;
	NSArray* _entries;
	NSString* _additionalNextDataLoadToken;
	NSString* _additionalPreviousDataLoadToken;
	long long _topLoadingCellItem;
	long long _bottomLoadingCellItem;
	long long _addFriendCellItem;
	long long _noFriendsCellItem;
	long long _maxRange;
	GKLeaderboardEntry* _localPlayerEntry;
	UICollectionView* _collectionView;
	long long _friendCount;
	NSSet* _localPlayerFriendIDs;
	GKLeaderboardAddFriendsCell* _sizingAddFriendsCell;

}

@property (nonatomic,retain) NSArray * entries;                                                           //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) BOOL isLoadingData;                                                          //@synthesize isLoadingData=_isLoadingData - In the implementation block
@property (assign,nonatomic) BOOL isLoadingNextData;                                                      //@synthesize isLoadingNextData=_isLoadingNextData - In the implementation block
@property (assign,nonatomic) BOOL isLoadingPreviousData;                                                  //@synthesize isLoadingPreviousData=_isLoadingPreviousData - In the implementation block
@property (nonatomic,retain) NSString * additionalNextDataLoadToken;                                      //@synthesize additionalNextDataLoadToken=_additionalNextDataLoadToken - In the implementation block
@property (nonatomic,retain) NSString * additionalPreviousDataLoadToken;                                  //@synthesize additionalPreviousDataLoadToken=_additionalPreviousDataLoadToken - In the implementation block
@property (assign,nonatomic) long long topLoadingCellItem;                                                //@synthesize topLoadingCellItem=_topLoadingCellItem - In the implementation block
@property (assign,nonatomic) long long bottomLoadingCellItem;                                             //@synthesize bottomLoadingCellItem=_bottomLoadingCellItem - In the implementation block
@property (assign,nonatomic) long long addFriendCellItem;                                                 //@synthesize addFriendCellItem=_addFriendCellItem - In the implementation block
@property (assign,nonatomic) long long noFriendsCellItem;                                                 //@synthesize noFriendsCellItem=_noFriendsCellItem - In the implementation block
@property (assign,nonatomic) long long maxRange;                                                          //@synthesize maxRange=_maxRange - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * localPlayerEntry;                                       //@synthesize localPlayerEntry=_localPlayerEntry - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long friendCount;                                                       //@synthesize friendCount=_friendCount - In the implementation block
@property (assign,nonatomic) BOOL firstLoad;                                                              //@synthesize firstLoad=_firstLoad - In the implementation block
@property (nonatomic,retain) NSSet * localPlayerFriendIDs;                                                //@synthesize localPlayerFriendIDs=_localPlayerFriendIDs - In the implementation block
@property (nonatomic,retain) GKLeaderboardAddFriendsCell * sizingAddFriendsCell;                          //@synthesize sizingAddFriendsCell=_sizingAddFriendsCell - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                                 //@synthesize leaderboard=_leaderboard - In the implementation block
@property (assign,nonatomic) long long playerScope; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) BOOL restrictToFriendsOnly;                                                  //@synthesize restrictToFriendsOnly=_restrictToFriendsOnly - In the implementation block
@property (assign,nonatomic) long long leaderboardOccurrence;                                             //@synthesize leaderboardOccurrence=_leaderboardOccurrence - In the implementation block
@property (assign,nonatomic,__weak) id<GKLeaderboardScoreDelegate> leaderboardScoreDelegate;              //@synthesize leaderboardScoreDelegate=_leaderboardScoreDelegate - In the implementation block
@property (assign,nonatomic) long long startingRank;                                                      //@synthesize startingRank=_startingRank - In the implementation block
@property (assign,nonatomic) BOOL autoScrollToLocalPlayerPosition;                                        //@synthesize autoScrollToLocalPlayerPosition=_autoScrollToLocalPlayerPosition - In the implementation block
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)friendCount;
-(BOOL)hasData;
-(void)setMaxRange:(long long)arg1 ;
-(double)cellSpacing;
-(UICollectionView *)collectionView;
-(void)setTimeScope:(long long)arg1 ;
-(void)setLeaderboardOccurrence:(long long)arg1 ;
-(long long)timeScope;
-(long long)leaderboardOccurrence;
-(void)setFriendCount:(long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(long long)itemCount;
-(NSArray *)entries;
-(id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(long long)maxRange;
-(void)setAutoScrollToLocalPlayerPosition:(BOOL)arg1 ;
-(void)setPlayerScope:(long long)arg1 ;
-(long long)playerScope;
-(void)setSizingAddFriendsCell:(GKLeaderboardAddFriendsCell *)arg1 ;
-(BOOL)restrictToFriendsOnly;
-(void)setLocalPlayerEntry:(GKLeaderboardEntry *)arg1 ;
-(void)setIsLoadingData:(BOOL)arg1 ;
-(id<GKLeaderboardScoreDelegate>)leaderboardScoreDelegate;
-(void)setLocalPlayerFriendIDs:(NSSet *)arg1 ;
-(void)loadInitialDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFirstLoad:(BOOL)arg1 ;
-(void)setIsLoadingNextData:(BOOL)arg1 ;
-(void)setIsLoadingPreviousData:(BOOL)arg1 ;
-(void)setAdditionalNextDataLoadToken:(NSString *)arg1 ;
-(void)setStartingRank:(long long)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setAdditionalPreviousDataLoadToken:(NSString *)arg1 ;
-(BOOL)autoScrollToLocalPlayerPosition;
-(void)processEntries:(id)arg1 localPlayerEntry:(id)arg2 totalPlayerCount:(long long)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(GKLeaderboardEntry *)localPlayerEntry;
-(long long)startingRank;
-(BOOL)isLoadingData;
-(BOOL)isLoadingNextData;
-(long long)bottomLoadingCellItem;
-(NSString *)additionalNextDataLoadToken;
-(void)loadMoreDataWithStartIndex:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLoadingPreviousData;
-(long long)topLoadingCellItem;
-(NSString *)additionalPreviousDataLoadToken;
-(void)setTopLoadingCellItem:(long long)arg1 ;
-(void)setBottomLoadingCellItem:(long long)arg1 ;
-(void)setAddFriendCellItem:(long long)arg1 ;
-(void)setNoFriendsCellItem:(long long)arg1 ;
-(long long)noFriendsCellItem;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)addFriendCellItem;
-(GKLeaderboardAddFriendsCell *)sizingAddFriendsCell;
-(NSSet *)localPlayerFriendIDs;
-(id)makeContextMenuForCell:(id)arg1 withScore:(id)arg2 ;
-(id)targetedPreviewForUIContextMenuConfiguration:(id)arg1 inCollectionView:(id)arg2 ;
-(id)localPlayerEntryIndexPath;
-(void)setRestrictToFriendsOnly:(BOOL)arg1 ;
-(void)setLeaderboardScoreDelegate:(id<GKLeaderboardScoreDelegate>)arg1 ;
-(BOOL)firstLoad;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
@end
