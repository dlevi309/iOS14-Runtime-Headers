/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
*/


#import <ExchangeSync/ExchangeSync-Structs.h>
@class NoteContext, NSMapTable;

@interface ESLocalDBWatcher : NSObject {

	int _lastSavedCalSequenceNumber;
	int _lastSavedABSequenceNumber;
	void* _abWatcher;
	CalDatabase* _calWatcher;
	NoteContext* _noteWatcher;
	NSMapTable* _concernedABPartyToBlockMap;
	NSMapTable* _concernedCalPartyToBlockMap;
	NSMapTable* _concernedNotePartyToBlockMap;

}

@property (assign,nonatomic) int lastSavedABSequenceNumber;               //@synthesize lastSavedABSequenceNumber=_lastSavedABSequenceNumber - In the implementation block
@property (assign,nonatomic) int lastSavedCalSequenceNumber;              //@synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber - In the implementation block
+(id)sharedDBWatcher;
-(id)init;
-(void)dealloc;
-(int)lastSavedCalSequenceNumber;
-(void)setLastSavedCalSequenceNumber:(int)arg1 ;
-(void)noteCalDBDirChanged;
-(void)_handleCalChangeNotification;
-(void)_notesChangedExternally;
-(void)registerConcernedCalParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedCalParty:(id)arg1 ;
-(void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedNoteParty:(id)arg1 ;
-(void)didReceiveDarwinNotification:(id)arg1 ;
-(void)_handleABChangeNotificationWithInfo:(id)arg1 ;
-(void)registerConcernedABParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedABParty:(id)arg1 ;
-(void)noteABDBDirChanged;
-(int)lastSavedABSequenceNumber;
-(void)setLastSavedABSequenceNumber:(int)arg1 ;
@end

