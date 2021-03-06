/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSTabBarItem.h>

@protocol IKJSTabBarItem <JSExport>
@end

#import <libobjc.A.dylib/_IKJSTabBarItemProxy.h>
#import <libobjc.A.dylib/_IKJSTabBarItem.h>

@protocol IKAppNavigationController;
@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSTabBar;

@interface IKJSTabBarItem : IKJSObject <NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem> {

	id<IKAppNavigationController> _navigationControllerDelegate;
	NSString* _identifier;
	IKJSNavigationDocument* _navigationDocument;
	JSManagedValue* _managedNavigationDocument;
	JSManagedValue* _managedSelf;
	IKJSTabBar* _owner;

}

@property (nonatomic,retain) JSManagedValue * managedNavigationDocument;                                       //@synthesize managedNavigationDocument=_managedNavigationDocument - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedSelf;                                                     //@synthesize managedSelf=_managedSelf - In the implementation block
@property (assign,nonatomic,__weak) IKJSTabBar * owner;                                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument;                                    //@synthesize navigationDocument=_navigationDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(void)setOwner:(IKJSTabBar *)arg1 ;
-(IKJSTabBar *)owner;
-(IKJSNavigationDocument *)navigationDocument;
-(JSManagedValue *)managedSelf;
-(JSManagedValue *)managedNavigationDocument;
-(id)asPrivateIKJSTabBarItem;
-(id)initWithAppContext:(id)arg1 identifier:(id)arg2 navigationController:(id)arg3 owner:(id)arg4 ;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(void)setManagedNavigationDocument:(JSManagedValue *)arg1 ;
-(void)setManagedSelf:(JSManagedValue *)arg1 ;
@end

