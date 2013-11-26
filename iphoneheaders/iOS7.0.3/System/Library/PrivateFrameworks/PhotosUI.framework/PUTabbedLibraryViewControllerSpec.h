/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PUAlbumListViewControllerSpec, PUAbstractAlbumListViewController, PUZoomableGridViewControllerSpec, PUFeedViewControllerSpec;

@interface PUTabbedLibraryViewControllerSpec : NSObject {

	PUAlbumListViewControllerSpec* _albumListViewControllerSpec;
	PUAbstractAlbumListViewController* _createAlbumListViewController;
	PUAbstractAlbumListViewController* _createSharedAlbumListViewController;
	PUZoomableGridViewControllerSpec* _zoomableGridViewControllerSpec;
	PUFeedViewControllerSpec* _feedViewControllerSpec;

}

@property (nonatomic,readonly) PUAlbumListViewControllerSpec * albumListViewControllerSpec;                          //@synthesize albumListViewControllerSpec=_albumListViewControllerSpec - In the implementation block
@property (nonatomic,readonly) PUAbstractAlbumListViewController * createAlbumListViewController;                    //@synthesize createAlbumListViewController=_createAlbumListViewController - In the implementation block
@property (nonatomic,readonly) PUAbstractAlbumListViewController * createSharedAlbumListViewController;              //@synthesize createSharedAlbumListViewController=_createSharedAlbumListViewController - In the implementation block
@property (nonatomic,readonly) PUZoomableGridViewControllerSpec * zoomableGridViewControllerSpec;                    //@synthesize zoomableGridViewControllerSpec=_zoomableGridViewControllerSpec - In the implementation block
@property (nonatomic,readonly) PUFeedViewControllerSpec * feedViewControllerSpec;                                    //@synthesize feedViewControllerSpec=_feedViewControllerSpec - In the implementation block
-(id)feedViewControllerSpec;
-(id)albumListViewControllerSpec;
-(id)zoomableGridViewControllerSpec;
-(id)createAlbumListViewController;
-(id)createSharedAlbumListViewController;
-(void).cxx_destruct;
@end
