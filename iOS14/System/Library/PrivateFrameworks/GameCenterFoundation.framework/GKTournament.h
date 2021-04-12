/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKCustomTournamentDelegate;
@class GKTournamentDefinition, GKScore, GKPlayer, GKTournamentParticipant, GKLeaderboard, NSObject, GKTournamentInternal, NSString, NSDate, NSURL;

@interface GKTournament : NSObject <NSSecureCoding> {

	GKTournamentDefinition* _tournamentDefinition;
	GKScore* _bestScore;
	GKPlayer* _winningPlayer;
	GKTournamentParticipant* _localParticipant;
	GKLeaderboard* _leaderboard;
	NSObject*<GKCustomTournamentDelegate> _customTournamentDelegate;
	GKTournamentInternal* _internal;

}

@property (retain) GKTournamentInternal * internal;                                                       //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * tournamentID; 
@property (nonatomic,readonly) NSString * nextTournamentID; 
@property (nonatomic,readonly) NSDate * nextTournamentBeginDate; 
@property (nonatomic,retain) GKTournamentDefinition * tournamentDefinition;                               //@synthesize tournamentDefinition=_tournamentDefinition - In the implementation block
@property (nonatomic,retain) GKScore * bestScore;                                                         //@synthesize bestScore=_bestScore - In the implementation block
@property (nonatomic,retain) GKPlayer * winningPlayer;                                                    //@synthesize winningPlayer=_winningPlayer - In the implementation block
@property (nonatomic,retain) GKTournamentParticipant * localParticipant;                                  //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                                 //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) NSObject*<GKCustomTournamentDelegate> customTournamentDelegate;              //@synthesize customTournamentDelegate=_customTournamentDelegate - In the implementation block
@property (nonatomic,retain) NSURL * inviteURLForMessages; 
@property (nonatomic,readonly) NSString * tournamentName; 
@property (nonatomic,readonly) BOOL registrationOpen; 
@property (nonatomic,readonly) long long maxReplays; 
@property (nonatomic,readonly) long long minPlayers; 
@property (nonatomic,readonly) long long maxPlayers; 
@property (nonatomic,readonly) long long scoringMethod; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long randomSeed; 
@property (nonatomic,readonly) NSDate * registrationBeginDate; 
@property (nonatomic,readonly) NSDate * registrationEndDate; 
@property (nonatomic,readonly) NSDate * tournamentBeginDate; 
@property (nonatomic,readonly) NSDate * tournamentEndDate; 
@property (nonatomic,readonly) long long tournamentState; 
@property (nonatomic,readonly) long long playerCount; 
@property (nonatomic,readonly) long long tournamentError; 
+(BOOL)supportsSecureCoding;
+(id)defaultCustomTournamentForTournamentDefinition:(id)arg1 ;
+(void)loadTournamentWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)lookForAcceptedCustomTournament;
+(void)notifyPlayerForTournament:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInternal:(GKTournamentInternal *)arg1 ;
-(id)init;
-(void)setBestScore:(GKScore *)arg1 ;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKScore *)bestScore;
-(void)encodeWithCoder:(id)arg1 ;
-(GKTournamentInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTournamentDefinition:(GKTournamentDefinition *)arg1 ;
-(GKTournamentDefinition *)tournamentDefinition;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKPlayer *)winningPlayer;
-(void)setWinningPlayer:(GKPlayer *)arg1 ;
-(GKTournamentParticipant *)localParticipant;
-(void)setLocalParticipant:(GKTournamentParticipant *)arg1 ;
-(void)setCustomTournamentDelegate:(NSObject*<GKCustomTournamentDelegate>)arg1 ;
-(NSObject*<GKCustomTournamentDelegate>)customTournamentDelegate;
-(void)loadParticipantsWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerPlayerInGroup:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resignFromTournamentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginPlayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resumePlayWithTryToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTotalPlayerCountForGroup:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getFriendCountForGroup:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)registrationOpen;
-(void)getLocalParticipantWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTournamentStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadScoresWithScope:(long long)arg1 range:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)verifyPlayerForMatchmaking:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getShareURLWithCompletionHandler:(/*^block*/id)arg1 ;
@end
