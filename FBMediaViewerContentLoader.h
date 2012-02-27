//
//  FBMediaViewerDownloader.h
//  FBMediaViewer
//
//  Created by Hiroshi Hashiguchi on 2/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^FBMediaViewerContentLoaderLoadingBlock)(NSUInteger loadedSize);
typedef void (^FBMediaViewerContentLoaderCompletionBlock)(BOOL canceled);
typedef void (^FBMediaViewerContentLoaderFailedBlock)(void);


@protocol FBMediaViewerItem;

@protocol FBMediaViewerContentLoader <NSObject>

- (void)loadWithMediaViewerItem:(id <FBMediaViewerItem>)mediaViewerItem
                    forceReload:(BOOL)forceReload
                        loading:(FBMediaViewerContentLoaderLoadingBlock)loadingBlock
                     completion:(FBMediaViewerContentLoaderCompletionBlock)completionBlock
                         failed:(FBMediaViewerContentLoaderFailedBlock)failedBlock;


- (void)cancelWithMediaViewerItem:(id <FBMediaViewerItem>)mediaViewerItem;

@end