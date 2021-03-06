/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


#import <TinCanShared/TinCanShared-Structs.h>
@class NSHashTable, NPSManager, CNCoalescingTimer, NSArray, NSUserDefaults, NSMutableDictionary;

@interface TCSContacts : NSObject {

	NSHashTable* _observers;
	NPSManager* _npsManager;
	CNCoalescingTimer* _whitelistSaveTimer;
	int _prefSyncToken;
	int _demoResetToken;
	os_unfair_lock_s _whitelistLock;
	BOOL _shouldObserveWhitelistDefaultChanges;
	NSArray* _destinations;
	NSUserDefaults* _defaults;
	NSMutableDictionary* _whitelist;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                              //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveWhitelistDefaultChanges;              //@synthesize shouldObserveWhitelistDefaultChanges=_shouldObserveWhitelistDefaultChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * whitelist;                        //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSArray * destinations;                                 //@synthesize destinations=_destinations - In the implementation block
+(id)canonicalDestinationsForContact:(id)arg1 ;
+(id)_canonicalDestinationForString:(id)arg1 ;
+(id)_safeContactDetailStringForLogging:(id)arg1 ;
+(id)_unifiedContactWithIdentifier:(id)arg1 orDestination:(id)arg2 usingContactStore:(id)arg3 keysToFetch:(id)arg4 ;
+(BOOL)_isUnknownContact:(id)arg1 equalToUnknownContact:(id)arg2 ;
+(id)_unifiedMeContactFromContactStore:(id)arg1 keysToFetch:(id)arg2 ;
+(id)_tinCanUserNotificationCenter;
+(id)validatedWhitelistFromDictionary:(id)arg1 ;
+(id)_destinationsFromWhitelistDictionary:(id)arg1 onlyAccepted:(BOOL)arg2 ;
+(id)_pauseCharacterSet;
+(id)_unknownContactWithDestination:(id)arg1 ;
+(id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg1 ;
+(id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg1 ;
+(BOOL)_contact:(id)arg1 hasKeysForFormatterStye:(long long)arg2 ;
+(id)_firstPhoneNumberOrEmailAddressFromContact:(id)arg1 formatPhoneNumber:(BOOL)arg2 ;
+(void)dismissInvitationNotificationsFromContact:(id)arg1 ;
+(BOOL)_isContact:(id)arg1 similarToContact:(id)arg2 ;
+(id)_safeContactNameStringForLogging:(id)arg1 handle:(id)arg2 ;
-(NSMutableDictionary *)whitelist;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSArray *)destinations;
-(void)setWhitelist:(NSMutableDictionary *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)addDestinations:(id)arg1 ;
-(void)_handleDeviceFirstUnlock;
-(BOOL)isDestinationAccepted:(id)arg1 ;
-(BOOL)isDestinationAnInviter:(id)arg1 ;
-(void)removeDestinations:(id)arg1 ;
-(long long)stateForContact:(id)arg1 ;
-(BOOL)isContactAnInviter:(id)arg1 ;
-(BOOL)isContactAccepted:(id)arg1 ;
-(void)_loadDataFromDefaults;
-(void)_saveWhitelist;
-(void)setShouldObserveWhitelistDefaultChanges:(BOOL)arg1 ;
-(void)_handleContactsPrefSync;
-(void)_addDestinations:(id)arg1 asType:(long long)arg2 ;
-(BOOL)_generateDestinationsFromWhitelist;
-(void)_notifyObserversDestinationsChanged;
-(void)_notifyObserversRecencyChanged;
-(void)setDestinationAsAccepted:(id)arg1 ;
-(void)_notifyObserversContactBecameAccepted:(id)arg1 ;
-(void)_didInitiateCallToDestination:(id)arg1 date:(id)arg2 ;
-(void)_didReceiveCallFromDestination:(id)arg1 date:(id)arg2 ;
-(id)mostRecentCallDateForDestination:(id)arg1 ;
-(id)mostRecentCallDateForContact:(id)arg1 ;
-(BOOL)contactSupportsTinCan:(id)arg1 ;
-(void)_reloadWhitelist;
-(BOOL)_loadWhitelistFromDefaults;
-(void)_logDestinations;
-(BOOL)_didIncomingOutgoingOrSupportChange:(id)arg1 ;
-(BOOL)_shouldHandleResetStoreDemoContent;
-(void)addDestinationsForInviter:(id)arg1 ;
-(void)setContact:(id)arg1 supportsTinCan:(BOOL)arg2 ;
-(void)setContactAsAccepted:(id)arg1 ;
-(void)didInitiateCallToContact:(id)arg1 date:(id)arg2 ;
-(void)didReceiveCallFromContact:(id)arg1 date:(id)arg2 ;
-(id)dateAddedForDestination:(id)arg1 ;
-(void)_resetStoreDemoContent;
-(void)_deleteWhitelist;
-(BOOL)shouldObserveWhitelistDefaultChanges;
@end

