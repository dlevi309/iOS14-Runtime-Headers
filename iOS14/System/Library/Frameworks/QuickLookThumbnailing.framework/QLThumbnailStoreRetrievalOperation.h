/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <Foundation/NSOperation.h>

@protocol OS_os_activity, QLThumbnailGenerationRequestNSXPCProxyCreating;
@class NSURL, NSError, NSObject, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	BOOL _finished;
	BOOL _executing;
	BOOL _allowsThumbnailGeneration;
	BOOL _generateThumbnailsAtBackgroundPriority;
	BOOL _thumbnailWasJustAutomaticallyGenerated;
	NSObject*<OS_os_activity> _retrievalActivity;
	NSObject*<OS_os_activity> _generationActivity;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
	NSURL* _destinationURL;

}

@property (retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                                        //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                                          //@synthesize finished=_finished - In the implementation block
@property (retain) id<QLThumbnailGenerationRequest><NSXPCProxyCreating> thumbnailRequest;              //@synthesize thumbnailRequest=_thumbnailRequest - In the implementation block
@property (retain) NSURL * documentURL;                                                                //@synthesize documentURL=_documentURL - In the implementation block
@property (retain) NSURL * destinationURL;                                                             //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign) BOOL allowsThumbnailGeneration;                                                     //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) BOOL generateThumbnailsAtBackgroundPriority;                                        //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated;                                      //@synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated - In the implementation block
@property (readonly) QLThumbnailAddition * addition;                                                   //@synthesize addition=_addition - In the implementation block
+(BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(NSURL *)destinationURL;
-(id)init;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(BOOL)_finishIfNeeded;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSURL *)documentURL;
-(NSError *)error;
-(void)setExecuting:(BOOL)arg1 ;
-(id)description;
-(void)setFinished:(BOOL)arg1 ;
-(void)main;
-(BOOL)isExecuting;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(id<QLThumbnailGenerationRequest><NSXPCProxyCreating>)thumbnailRequest;
-(void)setThumbnailRequest:(id<QLThumbnailGenerationRequest><NSXPCProxyCreating>)arg1 ;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)_generateThumbnail;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(void)_afterThumbnailIsGenerated;
-(void)_afterDeterminingWhetherWeCanGenerate:(BOOL)arg1 ;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(BOOL)thumbnailWasAutomaticallyGenerated;
-(BOOL)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(BOOL)arg1 ;
-(BOOL)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)thumbnailWasJustAutomaticallyGenerated;
-(QLThumbnailAddition *)addition;
@end

