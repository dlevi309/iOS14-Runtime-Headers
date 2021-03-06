/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, MPPlaybackArchiveConfiguration;

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding> {

	BOOL _allowsPickingMultipleItems;
	BOOL _showsCloudItems;
	BOOL _showsItemsWithProtectedAssets;
	BOOL _picksSingleCollectionEntity;
	BOOL _pickingForExternalPlayer;
	unsigned _watchCompatibilityVersion;
	unsigned long long _mediaTypes;
	NSString* _prompt;
	NSArray* _typeIdentifiers;
	long long _selectionMode;
	MPPlaybackArchiveConfiguration* _playbackArchiveConfiguration;
	long long _supportedContentOptions;

}

@property (assign,nonatomic) long long supportedContentOptions;                                          //@synthesize supportedContentOptions=_supportedContentOptions - In the implementation block
@property (assign,nonatomic) unsigned long long mediaTypes;                                              //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems;                                            //@synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems - In the implementation block
@property (assign,nonatomic) BOOL showsCloudItems;                                                       //@synthesize showsCloudItems=_showsCloudItems - In the implementation block
@property (assign,nonatomic) BOOL showsItemsWithProtectedAssets;                                         //@synthesize showsItemsWithProtectedAssets=_showsItemsWithProtectedAssets - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                            //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL picksSingleCollectionEntity;                                           //@synthesize picksSingleCollectionEntity=_picksSingleCollectionEntity - In the implementation block
@property (assign,nonatomic) unsigned watchCompatibilityVersion;                                         //@synthesize watchCompatibilityVersion=_watchCompatibilityVersion - In the implementation block
@property (nonatomic,copy) NSArray * typeIdentifiers;                                                    //@synthesize typeIdentifiers=_typeIdentifiers - In the implementation block
@property (assign,nonatomic) long long selectionMode;                                                    //@synthesize selectionMode=_selectionMode - In the implementation block
@property (assign,nonatomic) BOOL showsCatalogContent; 
@property (assign,nonatomic) BOOL showsLibraryContent; 
@property (assign,nonatomic) BOOL supportsUnavailableContent; 
@property (assign,nonatomic) BOOL pickingForExternalPlayer;                                              //@synthesize pickingForExternalPlayer=_pickingForExternalPlayer - In the implementation block
@property (nonatomic,retain) MPPlaybackArchiveConfiguration * playbackArchiveConfiguration;              //@synthesize playbackArchiveConfiguration=_playbackArchiveConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(NSArray *)typeIdentifiers;
-(long long)selectionMode;
-(void)setSelectionMode:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)showsCloudItems;
-(BOOL)showsCatalogContent;
-(void)setShowsCatalogContent:(BOOL)arg1 ;
-(BOOL)showsLibraryContent;
-(void)setShowsLibraryContent:(BOOL)arg1 ;
-(BOOL)supportsUnavailableContent;
-(void)setSupportsUnavailableContent:(BOOL)arg1 ;
-(BOOL)allowsPickingMultipleItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(void)setTypeIdentifiers:(NSArray *)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(BOOL)pickingForExternalPlayer;
-(void)setPickingForExternalPlayer:(BOOL)arg1 ;
-(MPPlaybackArchiveConfiguration *)playbackArchiveConfiguration;
-(void)setPlaybackArchiveConfiguration:(MPPlaybackArchiveConfiguration *)arg1 ;
-(long long)supportedContentOptions;
-(void)setSupportedContentOptions:(long long)arg1 ;
-(void)setMediaTypes:(unsigned long long)arg1 ;
-(unsigned long long)mediaTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
@end

