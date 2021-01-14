/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIColor, SKUIColorScheme, SKUIProductImageDataConsumer, SKUIStyledImageDataConsumer, NSMutableDictionary;

@interface SKUIItemArtworkContext : NSObject {

	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	SKUIProductImageDataConsumer* _generalImageConsumer;
	SKUIStyledImageDataConsumer* _iconConsumer;
	SKUIProductImageDataConsumer* _letterboxConsumer;
	SKUIStyledImageDataConsumer* _newsstandConsumer;
	NSMutableDictionary* _placeholders;
	SKUIProductImageDataConsumer* _posterConsumer;
	SKUIStyledImageDataConsumer* _messagesIconConsumer;

}

@property (nonatomic,retain) SKUIProductImageDataConsumer * generalConsumer;                  //@synthesize generalImageConsumer=_generalImageConsumer - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconConsumer;                      //@synthesize iconConsumer=_iconConsumer - In the implementation block
@property (nonatomic,retain) SKUIProductImageDataConsumer * letterboxConsumer;                //@synthesize letterboxConsumer=_letterboxConsumer - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * newsstandConsumer;                 //@synthesize newsstandConsumer=_newsstandConsumer - In the implementation block
@property (nonatomic,retain) SKUIProductImageDataConsumer * posterConsumer;                   //@synthesize posterConsumer=_posterConsumer - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * messagesIconConsumer;              //@synthesize messagesIconConsumer=_messagesIconConsumer - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                   //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)wishlistContext;
+(id)lockupContextWithSize:(long long)arg1 ;
+(id)roomContext;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)placeholderImageForItem:(id)arg1 ;
-(id)dataConsumerForItem:(id)arg1 ;
-(void)setIconConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(void)setGeneralConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(void)setNewsstandConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(void)setPosterConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(void)setLetterboxConsumer:(SKUIProductImageDataConsumer *)arg1 ;
-(CGSize)imageSizeForItem:(id)arg1 ;
-(id)URLForItem:(id)arg1 ;
-(CGSize)largestImageSizeForLockups:(id)arg1 ;
-(SKUIStyledImageDataConsumer *)iconConsumer;
-(id)artworkForItem:(id)arg1 ;
-(CGSize)largestImageSizeForItems:(id)arg1 ;
-(SKUIProductImageDataConsumer *)generalConsumer;
-(SKUIProductImageDataConsumer *)letterboxConsumer;
-(SKUIStyledImageDataConsumer *)newsstandConsumer;
-(SKUIProductImageDataConsumer *)posterConsumer;
-(SKUIStyledImageDataConsumer *)messagesIconConsumer;
-(void)setMessagesIconConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
@end
