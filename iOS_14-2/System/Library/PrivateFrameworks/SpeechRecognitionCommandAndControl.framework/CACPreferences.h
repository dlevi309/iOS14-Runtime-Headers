/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface CACPreferences : NSObject {

	NSDictionary* _builtInCommandsTableCache;
	NSMutableDictionary* _builtInLocalizedCommandStringsByLocaleIdentifier;
	NSMutableArray* _propertyTransactions;

}
+(id)sharedPreferences;
-(id)localeIdentifier;
-(id)init;
-(void)setLocaleIdentifier:(id)arg1 ;
-(BOOL)audioAndHistorySubmissionOptionIsAvailable;
-(void)setAllowAudioAndHistorySubmission:(BOOL)arg1 ;
-(id)propertiesForCommandIdentifier:(id)arg1 ;
-(id)bestLocaleIdentifier;
-(void)setProperties:(id)arg1 forCommandIdentifier:(id)arg2 ;
-(BOOL)additionalLoggingForCommands;
-(id)alwaysShowOverlayType;
-(id)recentCommandEntries;
-(void)setRecentCommandEntries:(id)arg1 ;
-(id)commandCounts;
-(void)setCommandCounts:(id)arg1 ;
-(id)targetApplicationCounts;
-(void)setTargetApplicationCounts:(id)arg1 ;
-(double)lastCommandDate;
-(BOOL)allowAudioAndHistorySubmission;
-(void)setLastCommandDate:(double)arg1 ;
-(id)rawCustomCommandsPreferencesDictionary;
-(id)vocabularyEntries;
-(BOOL)gridOverlayCustomColumnsEnabled;
-(BOOL)gridOverlayCustomRowsEnabled;
-(BOOL)showTextResponseUponRecognition;
-(BOOL)playSoundUponRecognition;
-(long long)userHintsFeatures;
-(id)attentionAwareAction;
-(id)builtInCommandsStringsTableForLocaleIdentifier:(id)arg1 ;
-(BOOL)isEnabledForCommandIdentifier:(id)arg1 ;
-(void)setAlwaysShowOverlayType:(id)arg1 ;
-(void)setCommandAndControlEnabled:(BOOL)arg1 ;
-(void)setSleepOnAttentionLost:(BOOL)arg1 ;
-(void)setWakeOnAttentionGained:(BOOL)arg1 ;
-(id)userSelectableLocaleIdentifiers;
-(id)divertedCommandsLogPath;
-(void)setDidShowOnboarding:(BOOL)arg1 ;
-(id)builtInCommandsTable;
-(BOOL)isCommandIdentifier:(id)arg1 availableForLocaleIdentifier:(id)arg2 ;
-(id)propertiesForCommandIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
-(id)commandIdentifiersForCommandSetIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
-(id)availableCommandSetIdentifiers;
-(id)displayNameForCommandSetIdentifier:(id)arg1 ;
-(BOOL)isConfirmationRequiredForCommandIdentifier:(id)arg1 ;
-(id)enabledCommandIdentifiersForCommandSetIdentifier:(id)arg1 ;
-(id)userHintsHistory;
-(void)setUserHintsHistory:(id)arg1 ;
-(void)_flushBuiltInCommandsStringsTable;
-(void)setAttentionAwareAction:(id)arg1 ;
-(void)removeAnyPrivateInformation;
-(void)setVocabularyEntries:(id)arg1 ;
-(void)removeUserCommandHistory;
-(id)_propertiesForIdentifier:(id)arg1 ;
-(id)_mutablePropertiesForIdentifier:(id)arg1 create:(BOOL)arg2 ;
-(void)setProperties:(id)arg1 forCommandIdentifier:(id)arg2 client:(BOOL)arg3 ;
-(void)_setProperties:(id)arg1 forIdentifier:(id)arg2 client:(BOOL)arg3 ;
-(void)_writeDefaultCommandSettingsIfNecessary;
-(void)_propertyTransactionSynchronize;
-(void)_propertyTransactionPostNotification:(id)arg1 identifier:(id)arg2 ;
-(id)_commandIdentifiersForCommandSetIdentifier:(id)arg1 localeIdentifier:(id)arg2 enabledOnly:(BOOL)arg3 ;
-(id)_allPropertyIdentifiers;
-(BOOL)commandAndControlIsEnabled;
-(void)setAdditionalLoggingForCommands:(BOOL)arg1 ;
-(BOOL)sleepOnAttentionLost;
-(BOOL)wakeOnAttentionGained;
-(void)setPlaySoundUponRecognition:(BOOL)arg1 ;
-(void)setShowTextResponseUponRecognition:(BOOL)arg1 ;
-(BOOL)didShowOnboarding;
-(id)textDisambiguationStrategy;
-(void)setTextDisambiguationStrategy:(id)arg1 ;
-(void)addVocabularyEntryWithString:(id)arg1 ;
-(void)setUserHintsFeatures:(long long)arg1 ;
-(BOOL)overlayFadingEnabled;
-(void)setOverlayFadingEnabled:(BOOL)arg1 ;
-(double)overlayFadeDelay;
-(void)setOverlayFadeDelay:(double)arg1 ;
-(float)overlayFadeOpacity;
-(void)setOverlayFadeOpacity:(float)arg1 ;
-(void)setGridOverlayCustomColumnsEnabled:(BOOL)arg1 ;
-(void)setGridOverlayCustomRowsEnabled:(BOOL)arg1 ;
-(long long)gridOverlayCustomColumnsCount;
-(void)setGridOverlayCustomColumnsCount:(long long)arg1 ;
-(long long)gridOverlayCustomRowsCount;
-(void)setGridOverlayCustomRowsCount:(long long)arg1 ;
-(long long)gridOverlayMaxLevel;
-(void)setGridOverlayMaxLevel:(long long)arg1 ;
-(BOOL)gridOverlayPressOnFirstLevelEnabled;
-(void)setGridOverlayPressOnFirstLevelEnabled:(BOOL)arg1 ;
-(BOOL)gridOverlayMaxDensityEnabled;
-(void)setGridOverlayMaxDensityEnabled:(BOOL)arg1 ;
-(BOOL)gridOverlayShowsNumbersInTopLeft;
-(void)setGridOverlayShowsNumbersInTopLeft:(BOOL)arg1 ;
-(BOOL)allowLetterKeysAsTapCommands;
-(void)setAllowLetterKeysAsTapCommands:(BOOL)arg1 ;
-(id)targetApplicationProperties;
-(void)setTargetApplicationProperties:(id)arg1 ;
-(void)removePropertiesForCommandIdentifier:(id)arg1 ;
-(id)uniqueCustomCommandIdentifier;
-(void)beginPropertyTransaction;
-(void)endPropertyTransaction;
-(BOOL)hidePreferencesForCommandSetIdentifier:(id)arg1 ;
-(id)setOfApplicationIdentifiersUsedByCustomCommands;
-(long long)correctionCount;
-(void)setCorrectionCount:(long long)arg1 ;
-(long long)messageTracesSinceLastReport;
-(void)setMessageTracesSinceLastReport:(long long)arg1 ;
@end
