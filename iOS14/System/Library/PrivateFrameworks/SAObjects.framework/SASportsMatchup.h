/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SASportsEntity, NSArray, NSString, NSNumber, SALCMLiveTuneInButton, SAUIAppPunchOut, NSDate, SALCMToggleButton;

@interface SASportsMatchup : SADomainObject

@property (nonatomic,retain) SASportsEntity * awayEntity; 
@property (nonatomic,copy) NSArray * awayLineScores; 
@property (nonatomic,copy) NSString * awayScore; 
@property (nonatomic,copy) NSNumber * awayShootoutPoints; 
@property (nonatomic,copy) NSString * awayTeamRecordSummary; 
@property (nonatomic,copy) NSString * currentPeriod; 
@property (nonatomic,copy) NSNumber * expectedLineScoreCount; 
@property (nonatomic,copy) NSString * favoredEntity; 
@property (nonatomic,copy) NSString * gameSummary; 
@property (nonatomic,copy) NSString * gameType; 
@property (nonatomic,retain) id<SAServerBoundCommand> getAppsCommand; 
@property (nonatomic,retain) id<SAServerBoundCommand> getModalDetailSnippetCommand; 
@property (nonatomic,retain) SASportsEntity * homeEntity; 
@property (nonatomic,copy) NSArray * homeLineScores; 
@property (nonatomic,copy) NSString * homeScore; 
@property (nonatomic,copy) NSNumber * homeShootoutPoints; 
@property (nonatomic,copy) NSString * homeTeamRecordSummary; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (nonatomic,copy) NSNumber * isExplicitlyEndOfPeriod; 
@property (assign,nonatomic) BOOL isOnNow; 
@property (assign,nonatomic) BOOL isWatchlistable; 
@property (nonatomic,copy) NSString * line; 
@property (nonatomic,retain) SALCMLiveTuneInButton * liveTuneInButton; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) NSString * matchupOrder; 
@property (nonatomic,copy) NSString * overUnder; 
@property (nonatomic,copy) NSString * periodDescription; 
@property (nonatomic,copy) NSArray * playSummaries; 
@property (nonatomic,copy) NSNumber * playoff; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSNumber * statsId; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * timeRemaining; 
@property (nonatomic,copy) NSNumber * timeTBD; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SALCMToggleButton * toggleButton; 
@property (nonatomic,copy) NSString * tournamentSeriesDescription; 
@property (nonatomic,copy) NSArray * tvChannels; 
@property (nonatomic,copy) NSString * winningEntity; 
+(id)matchup;
+(id)matchupWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)isAvailable;
-(id)groupIdentifier;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
-(id)encodedClassName;
-(void)setLine:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocationName:(NSString *)arg1 ;
-(SASportsEntity *)awayEntity;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAwayEntity:(SASportsEntity *)arg1 ;
-(NSArray *)awayLineScores;
-(void)setAwayLineScores:(NSArray *)arg1 ;
-(NSString *)awayScore;
-(void)setAwayScore:(NSString *)arg1 ;
-(NSNumber *)awayShootoutPoints;
-(void)setAwayShootoutPoints:(NSNumber *)arg1 ;
-(NSString *)awayTeamRecordSummary;
-(NSString *)currentPeriod;
-(void)setAwayTeamRecordSummary:(NSString *)arg1 ;
-(void)setCurrentPeriod:(NSString *)arg1 ;
-(NSNumber *)expectedLineScoreCount;
-(void)setExpectedLineScoreCount:(NSNumber *)arg1 ;
-(NSString *)favoredEntity;
-(void)setFavoredEntity:(NSString *)arg1 ;
-(NSString *)gameSummary;
-(void)setGameSummary:(NSString *)arg1 ;
-(void)setGameType:(NSString *)arg1 ;
-(id<SAServerBoundCommand>)getAppsCommand;
-(void)setGetAppsCommand:(id<SAServerBoundCommand>)arg1 ;
-(id<SAServerBoundCommand>)getModalDetailSnippetCommand;
-(void)setGetModalDetailSnippetCommand:(id<SAServerBoundCommand>)arg1 ;
-(SASportsEntity *)homeEntity;
-(void)setHomeEntity:(SASportsEntity *)arg1 ;
-(NSArray *)homeLineScores;
-(void)setHomeLineScores:(NSArray *)arg1 ;
-(NSString *)homeScore;
-(void)setHomeScore:(NSString *)arg1 ;
-(NSNumber *)homeShootoutPoints;
-(void)setHomeShootoutPoints:(NSNumber *)arg1 ;
-(NSString *)homeTeamRecordSummary;
-(void)setHomeTeamRecordSummary:(NSString *)arg1 ;
-(NSNumber *)isExplicitlyEndOfPeriod;
-(void)setIsExplicitlyEndOfPeriod:(NSNumber *)arg1 ;
-(void)setIsOnNow:(BOOL)arg1 ;
-(BOOL)isWatchlistable;
-(void)setIsWatchlistable:(BOOL)arg1 ;
-(void)setLiveTuneInButton:(SALCMLiveTuneInButton *)arg1 ;
-(NSString *)matchupOrder;
-(void)setMatchupOrder:(NSString *)arg1 ;
-(NSString *)overUnder;
-(void)setOverUnder:(NSString *)arg1 ;
-(NSString *)periodDescription;
-(NSArray *)playSummaries;
-(void)setPeriodDescription:(NSString *)arg1 ;
-(void)setPlaySummaries:(NSArray *)arg1 ;
-(void)setPlayoff:(NSNumber *)arg1 ;
-(void)setStatsId:(NSNumber *)arg1 ;
-(void)setTimeTBD:(NSNumber *)arg1 ;
-(void)setToggleButton:(SALCMToggleButton *)arg1 ;
-(NSString *)tournamentSeriesDescription;
-(void)setTournamentSeriesDescription:(NSString *)arg1 ;
-(NSArray *)tvChannels;
-(void)setTvChannels:(NSArray *)arg1 ;
-(NSString *)winningEntity;
-(void)setWinningEntity:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setTimeRemaining:(NSString *)arg1 ;
-(NSString *)timeRemaining;
-(BOOL)isOnNow;
-(NSNumber *)playoff;
-(NSNumber *)statsId;
-(NSNumber *)timeTBD;
-(SAUIAppPunchOut *)punchout;
-(SALCMToggleButton *)toggleButton;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)gameType;
-(void)setIsAvailable:(BOOL)arg1 ;
-(SALCMLiveTuneInButton *)liveTuneInButton;
-(NSString *)locationName;
-(NSDate *)startTime;
-(NSString *)line;
-(NSString *)title;
-(NSString *)status;
@end
