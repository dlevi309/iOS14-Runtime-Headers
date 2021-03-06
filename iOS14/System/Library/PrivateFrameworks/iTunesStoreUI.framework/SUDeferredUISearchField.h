/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UISearchField.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {

	long long _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFont:(id)arg1 ;
-(CGRect)frame;
-(void)setText:(id)arg1 ;
-(long long)clearButtonMode;
-(void)setPlaceholder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(id)text;
-(id)placeholder;
-(void)setClearButtonMode:(long long)arg1 ;
-(float)paddingTop;
-(float)paddingLeft;
-(void)dealloc;
-(id)font;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
@end

