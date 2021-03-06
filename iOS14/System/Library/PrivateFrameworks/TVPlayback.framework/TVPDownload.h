/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@protocol TVPMediaItem;
@class NSObject, NSError, NSNumber, NSArray, NSData, NSDictionary, TVPStateMachine, TVPMediaItemLoader, TVPDownloadSession, AVAggregateAssetDownloadTask, NSPointerArray, NSProgress, NSMapTable, TVPReportingSession, NSString;

@interface TVPDownload : NSObject <AVAssetDownloadDelegate> {

	BOOL _performKeyFetchOnly;
	BOOL _allowCellularUsage;
	BOOL _preferMostCompatibleRendition;
	BOOL _allowHDR;
	BOOL _allowMultichannelAudio;
	BOOL _limitMultichannelAudioToSingleLanguage;
	BOOL _includeDefaultAudioOption;
	BOOL _includeOriginalAudio;
	BOOL _includeDeviceLanguageAudio;
	BOOL _includesAllSubtitles;
	BOOL _downloadIsComplete;
	NSObject*<TVPMediaItem> _mediaItem;
	long long _state;
	NSError* _error;
	NSNumber* _minimumRequiredMediaBitrateForMostCompatibleFormat;
	NSNumber* _minimumRequiredMediaBitrateForHEVC;
	NSArray* _preferredAudioLanguageCodes;
	NSArray* _preferredSubtitleLanguageCodes;
	NSData* _storageSettingsImageData;
	NSDictionary* _userInfo;
	NSNumber* _minimumRequiredMediaBitrate;
	TVPStateMachine* _stateMachine;
	TVPMediaItemLoader* _mediaItemLoader;
	TVPDownloadSession* _downloadSession;
	AVAggregateAssetDownloadTask* _downloadTask;
	NSPointerArray* _delegates;
	NSProgress* _downloadProgress;
	NSMapTable* _mediaSelectionToProgressMap;
	unsigned long long _downloadInitiationBackgroundTask;
	unsigned long long _downloadTerminationBackgroundTask;
	TVPReportingSession* _reportingSession;
	unsigned long long _numAudioSelectionsToBeDownloaded;
	unsigned long long _numSubtitleSelectionsToBeDownloaded;
	unsigned long long _numMediaSelectionsCompleted;
	CGSize _minimumRequiredPresentationSize;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                                          //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                             //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) TVPMediaItemLoader * mediaItemLoader;                                       //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (assign,nonatomic,__weak) TVPDownloadSession * downloadSession;                                //@synthesize downloadSession=_downloadSession - In the implementation block
@property (nonatomic,retain) AVAggregateAssetDownloadTask * downloadTask;                                //@synthesize downloadTask=_downloadTask - In the implementation block
@property (assign,nonatomic) BOOL downloadIsComplete;                                                    //@synthesize downloadIsComplete=_downloadIsComplete - In the implementation block
@property (nonatomic,retain) NSPointerArray * delegates;                                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSProgress * downloadProgress;                                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSMapTable * mediaSelectionToProgressMap;                                   //@synthesize mediaSelectionToProgressMap=_mediaSelectionToProgressMap - In the implementation block
@property (assign,nonatomic) unsigned long long downloadInitiationBackgroundTask;                        //@synthesize downloadInitiationBackgroundTask=_downloadInitiationBackgroundTask - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTerminationBackgroundTask;                       //@synthesize downloadTerminationBackgroundTask=_downloadTerminationBackgroundTask - In the implementation block
@property (nonatomic,retain) TVPReportingSession * reportingSession;                                     //@synthesize reportingSession=_reportingSession - In the implementation block
@property (assign,nonatomic) unsigned long long numAudioSelectionsToBeDownloaded;                        //@synthesize numAudioSelectionsToBeDownloaded=_numAudioSelectionsToBeDownloaded - In the implementation block
@property (assign,nonatomic) unsigned long long numSubtitleSelectionsToBeDownloaded;                     //@synthesize numSubtitleSelectionsToBeDownloaded=_numSubtitleSelectionsToBeDownloaded - In the implementation block
@property (assign,nonatomic) unsigned long long numMediaSelectionsCompleted;                             //@synthesize numMediaSelectionsCompleted=_numMediaSelectionsCompleted - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (assign,nonatomic) BOOL performKeyFetchOnly;                                                   //@synthesize performKeyFetchOnly=_performKeyFetchOnly - In the implementation block
@property (assign,nonatomic) BOOL allowCellularUsage;                                                    //@synthesize allowCellularUsage=_allowCellularUsage - In the implementation block
@property (assign,nonatomic) BOOL preferMostCompatibleRendition;                                         //@synthesize preferMostCompatibleRendition=_preferMostCompatibleRendition - In the implementation block
@property (assign,nonatomic) CGSize minimumRequiredPresentationSize;                                     //@synthesize minimumRequiredPresentationSize=_minimumRequiredPresentationSize - In the implementation block
@property (nonatomic,retain) NSNumber * minimumRequiredMediaBitrateForMostCompatibleFormat;              //@synthesize minimumRequiredMediaBitrateForMostCompatibleFormat=_minimumRequiredMediaBitrateForMostCompatibleFormat - In the implementation block
@property (nonatomic,retain) NSNumber * minimumRequiredMediaBitrateForHEVC;                              //@synthesize minimumRequiredMediaBitrateForHEVC=_minimumRequiredMediaBitrateForHEVC - In the implementation block
@property (assign,nonatomic) BOOL allowHDR;                                                              //@synthesize allowHDR=_allowHDR - In the implementation block
@property (assign,nonatomic) BOOL allowMultichannelAudio;                                                //@synthesize allowMultichannelAudio=_allowMultichannelAudio - In the implementation block
@property (assign,nonatomic) BOOL limitMultichannelAudioToSingleLanguage;                                //@synthesize limitMultichannelAudioToSingleLanguage=_limitMultichannelAudioToSingleLanguage - In the implementation block
@property (assign,nonatomic) BOOL includeDefaultAudioOption;                                             //@synthesize includeDefaultAudioOption=_includeDefaultAudioOption - In the implementation block
@property (assign,nonatomic) BOOL includeOriginalAudio;                                                  //@synthesize includeOriginalAudio=_includeOriginalAudio - In the implementation block
@property (assign,nonatomic) BOOL includeDeviceLanguageAudio;                                            //@synthesize includeDeviceLanguageAudio=_includeDeviceLanguageAudio - In the implementation block
@property (nonatomic,retain) NSArray * preferredAudioLanguageCodes;                                      //@synthesize preferredAudioLanguageCodes=_preferredAudioLanguageCodes - In the implementation block
@property (assign,nonatomic) BOOL includesAllSubtitles;                                                  //@synthesize includesAllSubtitles=_includesAllSubtitles - In the implementation block
@property (nonatomic,retain) NSArray * preferredSubtitleLanguageCodes;                                   //@synthesize preferredSubtitleLanguageCodes=_preferredSubtitleLanguageCodes - In the implementation block
@property (nonatomic,retain) NSData * storageSettingsImageData;                                          //@synthesize storageSettingsImageData=_storageSettingsImageData - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSNumber * minimumRequiredMediaBitrate;                                     //@synthesize minimumRequiredMediaBitrate=_minimumRequiredMediaBitrate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSPointerArray *)delegates;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3 ;
-(void)setDelegates:(NSPointerArray *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5 forMediaSelection:(id)arg6 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(NSDictionary *)userInfo;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(double)progress;
-(void)start;
-(void)pause;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSProgress *)downloadProgress;
-(NSObject*<TVPMediaItem>)mediaItem;
-(TVPStateMachine *)stateMachine;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setDownloadTask:(AVAggregateAssetDownloadTask *)arg1 ;
-(AVAggregateAssetDownloadTask *)downloadTask;
-(id)descriptionForState:(long long)arg1 ;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(TVPReportingSession *)reportingSession;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)_registerStateMachineHandlers;
-(BOOL)performKeyFetchOnly;
-(void)setPerformKeyFetchOnly:(BOOL)arg1 ;
-(void)setMinimumRequiredMediaBitrateForMostCompatibleFormat:(NSNumber *)arg1 ;
-(void)setMinimumRequiredPresentationSize:(CGSize)arg1 ;
-(void)setMinimumRequiredMediaBitrateForHEVC:(NSNumber *)arg1 ;
-(void)setStorageSettingsImageData:(NSData *)arg1 ;
-(void)setAllowCellularUsage:(BOOL)arg1 ;
-(void)setIncludeDefaultAudioOption:(BOOL)arg1 ;
-(void)setIncludeOriginalAudio:(BOOL)arg1 ;
-(void)setIncludeDeviceLanguageAudio:(BOOL)arg1 ;
-(void)setPreferredAudioLanguageCodes:(NSArray *)arg1 ;
-(void)setAllowHDR:(BOOL)arg1 ;
-(void)setAllowMultichannelAudio:(BOOL)arg1 ;
-(void)setLimitMultichannelAudioToSingleLanguage:(BOOL)arg1 ;
-(void)setIncludesAllSubtitles:(BOOL)arg1 ;
-(void)setPreferredSubtitleLanguageCodes:(NSArray *)arg1 ;
-(void)setPreferMostCompatibleRendition:(BOOL)arg1 ;
-(TVPDownloadSession *)downloadSession;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(void)_mediaItemLoaderStateDidChangeTo:(id)arg1 ;
-(NSMapTable *)mediaSelectionToProgressMap;
-(unsigned long long)numMediaSelectionsCompleted;
-(id)_newProgressForMediaSelection:(id)arg1 ;
-(void)setNumMediaSelectionsCompleted:(unsigned long long)arg1 ;
-(unsigned long long)downloadTerminationBackgroundTask;
-(void)setDownloadTerminationBackgroundTask:(unsigned long long)arg1 ;
-(unsigned long long)numAudioSelectionsToBeDownloaded;
-(unsigned long long)numSubtitleSelectionsToBeDownloaded;
-(void)setDownloadIsComplete:(BOOL)arg1 ;
-(void)setNumAudioSelectionsToBeDownloaded:(unsigned long long)arg1 ;
-(void)setNumSubtitleSelectionsToBeDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)downloadInitiationBackgroundTask;
-(void)setDownloadInitiationBackgroundTask:(unsigned long long)arg1 ;
-(void)setReportingSession:(TVPReportingSession *)arg1 ;
-(BOOL)allowCellularUsage;
-(BOOL)includeDefaultAudioOption;
-(BOOL)includeOriginalAudio;
-(void)_addMediaSelectionOptionsIfNotAlreadyAdded:(id)arg1 toMediaSelections:(id)arg2 forMediaSelectionGroup:(id)arg3 baseMediaSelection:(id)arg4 ;
-(NSArray *)preferredAudioLanguageCodes;
-(BOOL)includeDeviceLanguageAudio;
-(BOOL)includesAllSubtitles;
-(NSArray *)preferredSubtitleLanguageCodes;
-(BOOL)allowMultichannelAudio;
-(BOOL)limitMultichannelAudioToSingleLanguage;
-(CGSize)minimumRequiredPresentationSize;
-(NSNumber *)minimumRequiredMediaBitrateForMostCompatibleFormat;
-(NSNumber *)minimumRequiredMediaBitrateForHEVC;
-(BOOL)preferMostCompatibleRendition;
-(BOOL)allowHDR;
-(NSData *)storageSettingsImageData;
-(BOOL)downloadIsComplete;
-(id)initWithMediaItem:(id)arg1 downloadSession:(id)arg2 existingDownloadTask:(id)arg3 ;
-(NSNumber *)minimumRequiredMediaBitrate;
-(void)setMinimumRequiredMediaBitrate:(NSNumber *)arg1 ;
-(void)setDownloadSession:(TVPDownloadSession *)arg1 ;
-(void)setMediaSelectionToProgressMap:(NSMapTable *)arg1 ;
@end

