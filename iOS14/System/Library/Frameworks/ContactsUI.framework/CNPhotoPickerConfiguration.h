/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNPhotoPickerConfiguration : NSObject {

	BOOL _includeContactImage;
	BOOL _includeUnifiedContactImages;
	BOOL _includeFaces;
	BOOL _includeMonograms;
	BOOL _includeAnimoji;
	BOOL _includeRecents;
	BOOL _includeEmoji;
	BOOL _allowPhotoCapture;
	BOOL _allowPhotoFromLibrary;
	BOOL _allowAnimojiCreation;
	BOOL _allowRotation;

}

@property (nonatomic,readonly) BOOL includeContactImage;                      //@synthesize includeContactImage=_includeContactImage - In the implementation block
@property (nonatomic,readonly) BOOL includeUnifiedContactImages;              //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (nonatomic,readonly) BOOL includeFaces;                             //@synthesize includeFaces=_includeFaces - In the implementation block
@property (nonatomic,readonly) BOOL includeMonograms;                         //@synthesize includeMonograms=_includeMonograms - In the implementation block
@property (nonatomic,readonly) BOOL includeAnimoji;                           //@synthesize includeAnimoji=_includeAnimoji - In the implementation block
@property (nonatomic,readonly) BOOL includeRecents;                           //@synthesize includeRecents=_includeRecents - In the implementation block
@property (nonatomic,readonly) BOOL includeEmoji;                             //@synthesize includeEmoji=_includeEmoji - In the implementation block
@property (nonatomic,readonly) BOOL allowPhotoCapture;                        //@synthesize allowPhotoCapture=_allowPhotoCapture - In the implementation block
@property (nonatomic,readonly) BOOL allowPhotoFromLibrary;                    //@synthesize allowPhotoFromLibrary=_allowPhotoFromLibrary - In the implementation block
@property (nonatomic,readonly) BOOL allowAnimojiCreation;                     //@synthesize allowAnimojiCreation=_allowAnimojiCreation - In the implementation block
@property (nonatomic,readonly) BOOL allowRotation;                            //@synthesize allowRotation=_allowRotation - In the implementation block
+(id)defaultConfiguration;
+(id)contactsConfiguration;
+(id)gameCenterConfiguration;
-(id)initWithIncludeContactImage:(BOOL)arg1 includeUnifiedContactImages:(BOOL)arg2 includeFaces:(BOOL)arg3 includeMonograms:(BOOL)arg4 includeAnimoji:(BOOL)arg5 includeRecents:(BOOL)arg6 includeEmoji:(BOOL)arg7 allowPhotoCapture:(BOOL)arg8 allowPhotoFromLibrary:(BOOL)arg9 allowAnimojiCreation:(BOOL)arg10 allowRotation:(BOOL)arg11 ;
-(BOOL)includeEmoji;
-(BOOL)allowPhotoCapture;
-(BOOL)allowAnimojiCreation;
-(BOOL)allowPhotoFromLibrary;
-(id)configurationBySettingAllowsPhotoCapture:(BOOL)arg1 ;
-(BOOL)allowRotation;
-(BOOL)includeUnifiedContactImages;
-(BOOL)includeContactImage;
-(BOOL)includeMonograms;
-(BOOL)includeAnimoji;
-(BOOL)includeRecents;
-(BOOL)includeFaces;
@end

