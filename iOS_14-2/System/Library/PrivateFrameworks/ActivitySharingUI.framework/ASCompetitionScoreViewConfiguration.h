/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/


#import <ActivitySharingUI/ActivitySharingUI-Structs.h>
@class UIFont;

@interface ASCompetitionScoreViewConfiguration : NSObject {

	BOOL _showsScoreTypeHeader;
	BOOL _showsNames;
	BOOL _uppercaseNames;
	BOOL _showsPrimaryScoreUnits;
	BOOL _zeroPadPrimaryScore;
	BOOL _showsAchievementThumbnail;
	BOOL _showsTodaySecondaryScore;
	BOOL _wantsScaledBaselineAlignment;
	UIFont* _headerFont;
	double _headerBaselineOffset;
	UIFont* _nameFont;
	double _nameBaselineOffset;
	long long _primaryScoreSource;
	UIFont* _primaryScoreFont;
	UIFont* _primaryScoreUnitFont;
	double _primaryScoreBaselineOffset;
	double _achievementThumbnailTopMargin;
	long long _achievementThumbnailAlignment;
	long long _achievementThumbnailQuality;
	UIFont* _secondaryScoreFont;
	double _secondaryScoreBaselineOffset;
	long long _alignment;
	long long _division;
	double _sideMargin;
	double _bottomMargin;
	double _minimumMiddleMargin;
	double _opponentScoreViewWidth;
	CGSize _achievementThumbnailSize;

}

@property (nonatomic,retain) UIFont * headerFont;                                  //@synthesize headerFont=_headerFont - In the implementation block
@property (assign,nonatomic) double headerBaselineOffset;                          //@synthesize headerBaselineOffset=_headerBaselineOffset - In the implementation block
@property (assign,nonatomic) BOOL showsScoreTypeHeader;                            //@synthesize showsScoreTypeHeader=_showsScoreTypeHeader - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                                    //@synthesize nameFont=_nameFont - In the implementation block
@property (assign,nonatomic) double nameBaselineOffset;                            //@synthesize nameBaselineOffset=_nameBaselineOffset - In the implementation block
@property (assign,nonatomic) BOOL showsNames;                                      //@synthesize showsNames=_showsNames - In the implementation block
@property (assign,nonatomic) BOOL uppercaseNames;                                  //@synthesize uppercaseNames=_uppercaseNames - In the implementation block
@property (assign,nonatomic) long long primaryScoreSource;                         //@synthesize primaryScoreSource=_primaryScoreSource - In the implementation block
@property (nonatomic,retain) UIFont * primaryScoreFont;                            //@synthesize primaryScoreFont=_primaryScoreFont - In the implementation block
@property (nonatomic,retain) UIFont * primaryScoreUnitFont;                        //@synthesize primaryScoreUnitFont=_primaryScoreUnitFont - In the implementation block
@property (assign,nonatomic) double primaryScoreBaselineOffset;                    //@synthesize primaryScoreBaselineOffset=_primaryScoreBaselineOffset - In the implementation block
@property (assign,nonatomic) BOOL showsPrimaryScoreUnits;                          //@synthesize showsPrimaryScoreUnits=_showsPrimaryScoreUnits - In the implementation block
@property (assign,nonatomic) BOOL zeroPadPrimaryScore;                             //@synthesize zeroPadPrimaryScore=_zeroPadPrimaryScore - In the implementation block
@property (assign,nonatomic) double achievementThumbnailTopMargin;                 //@synthesize achievementThumbnailTopMargin=_achievementThumbnailTopMargin - In the implementation block
@property (assign,nonatomic) CGSize achievementThumbnailSize;                      //@synthesize achievementThumbnailSize=_achievementThumbnailSize - In the implementation block
@property (assign,nonatomic) BOOL showsAchievementThumbnail;                       //@synthesize showsAchievementThumbnail=_showsAchievementThumbnail - In the implementation block
@property (assign,nonatomic) long long achievementThumbnailAlignment;              //@synthesize achievementThumbnailAlignment=_achievementThumbnailAlignment - In the implementation block
@property (assign,nonatomic) long long achievementThumbnailQuality;                //@synthesize achievementThumbnailQuality=_achievementThumbnailQuality - In the implementation block
@property (nonatomic,retain) UIFont * secondaryScoreFont;                          //@synthesize secondaryScoreFont=_secondaryScoreFont - In the implementation block
@property (assign,nonatomic) double secondaryScoreBaselineOffset;                  //@synthesize secondaryScoreBaselineOffset=_secondaryScoreBaselineOffset - In the implementation block
@property (assign,nonatomic) BOOL showsTodaySecondaryScore;                        //@synthesize showsTodaySecondaryScore=_showsTodaySecondaryScore - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long division;                                   //@synthesize division=_division - In the implementation block
@property (assign,nonatomic) double sideMargin;                                    //@synthesize sideMargin=_sideMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                                  //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double minimumMiddleMargin;                           //@synthesize minimumMiddleMargin=_minimumMiddleMargin - In the implementation block
@property (assign,nonatomic) double opponentScoreViewWidth;                        //@synthesize opponentScoreViewWidth=_opponentScoreViewWidth - In the implementation block
@property (assign,nonatomic) BOOL wantsScaledBaselineAlignment;                    //@synthesize wantsScaledBaselineAlignment=_wantsScaledBaselineAlignment - In the implementation block
+(id)gizmoTotalScoreConfiguration;
+(id)gizmoTotalScoreFriendDetailConfiguration;
+(id)gizmoTotalWinsConfiguration;
+(id)companionTotalScoreFriendDetailConfiguration;
+(id)companionTotalWinsFriendDetailConfiguration;
+(id)gizmoTodayScoreConfiguration;
+(id)gizmoTotalWinsStandaloneConfiguration;
+(id)companionFriendListConfiguration;
+(id)companionTotalWinsStandaloneFriendDetailConfiguration;
-(UIFont *)headerFont;
-(long long)alignment;
-(void)setBottomMargin:(double)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(double)bottomMargin;
-(void)setNameFont:(UIFont *)arg1 ;
-(UIFont *)nameFont;
-(BOOL)showsNames;
-(double)nameBaselineOffset;
-(BOOL)wantsScaledBaselineAlignment;
-(double)primaryScoreBaselineOffset;
-(double)secondaryScoreBaselineOffset;
-(UIFont *)secondaryScoreFont;
-(UIFont *)primaryScoreFont;
-(UIFont *)primaryScoreUnitFont;
-(BOOL)showsPrimaryScoreUnits;
-(BOOL)zeroPadPrimaryScore;
-(void)setShowsScoreTypeHeader:(BOOL)arg1 ;
-(void)setNameBaselineOffset:(double)arg1 ;
-(void)setShowsNames:(BOOL)arg1 ;
-(void)setUppercaseNames:(BOOL)arg1 ;
-(void)setPrimaryScoreFont:(UIFont *)arg1 ;
-(void)setPrimaryScoreBaselineOffset:(double)arg1 ;
-(void)setPrimaryScoreSource:(long long)arg1 ;
-(void)setShowsPrimaryScoreUnits:(BOOL)arg1 ;
-(void)setZeroPadPrimaryScore:(BOOL)arg1 ;
-(void)setShowsAchievementThumbnail:(BOOL)arg1 ;
-(void)setSideMargin:(double)arg1 ;
-(void)setMinimumMiddleMargin:(double)arg1 ;
-(void)setDivision:(long long)arg1 ;
-(void)setWantsScaledBaselineAlignment:(BOOL)arg1 ;
-(void)setHeaderFont:(UIFont *)arg1 ;
-(void)setHeaderBaselineOffset:(double)arg1 ;
-(void)setAchievementThumbnailSize:(CGSize)arg1 ;
-(void)setAchievementThumbnailTopMargin:(double)arg1 ;
-(void)setAchievementThumbnailAlignment:(long long)arg1 ;
-(void)setAchievementThumbnailQuality:(long long)arg1 ;
-(void)setPrimaryScoreUnitFont:(UIFont *)arg1 ;
-(void)setShowsTodaySecondaryScore:(BOOL)arg1 ;
-(void)setSecondaryScoreFont:(UIFont *)arg1 ;
-(void)setSecondaryScoreBaselineOffset:(double)arg1 ;
-(double)headerBaselineOffset;
-(BOOL)showsScoreTypeHeader;
-(BOOL)uppercaseNames;
-(long long)primaryScoreSource;
-(double)achievementThumbnailTopMargin;
-(CGSize)achievementThumbnailSize;
-(BOOL)showsAchievementThumbnail;
-(long long)achievementThumbnailAlignment;
-(long long)achievementThumbnailQuality;
-(BOOL)showsTodaySecondaryScore;
-(long long)division;
-(double)sideMargin;
-(double)minimumMiddleMargin;
-(double)opponentScoreViewWidth;
-(void)setOpponentScoreViewWidth:(double)arg1 ;
@end
