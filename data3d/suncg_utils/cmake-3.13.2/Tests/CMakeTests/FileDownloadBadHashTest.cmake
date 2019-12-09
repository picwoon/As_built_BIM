if(NOT "/home/wenjing/DATA/Detection_3D-data_multi_stories/data3d/suncg_utils/cmake-3.13.2/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/home/wenjing/DATA/Detection_3D-data_multi_stories/data3d/suncg_utils/cmake-3.13.2/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/home/wenjing/DATA/Detection_3D-data_multi_stories/data3d/suncg_utils/cmake-3.13.2/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
